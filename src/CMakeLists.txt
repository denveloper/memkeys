project(memkeys)

set(SRCLIST
    util/backoff.cpp
    util/stat.cpp
    util/state.cpp
    util/stats.cpp
    report/csv.cpp
    report/curses.cpp
    report/report.cpp
    report/report_type.cpp
    net/capture_engine.cpp
    net/device.cpp
    net/memcache_command.cpp
    net/packet.cpp
    net/pcap.cpp
    net/pcap_live.cpp
    logging/level.cpp
    logging/logger.cpp
    logging/record.cpp
#    logging/test_level.cpp
#    logging/test_record.cpp
    cli.cpp
    memkeys.cpp
    config.cpp
    main.cpp
)

add_executable(${PROJECT_NAME}
     ${SRCLIST}
)

set(LINKLIBS
    pcap
    pcrecpp
    ncurses
    pthread
)

target_link_libraries(${PROJECT_NAME} ${LINKLIBS})