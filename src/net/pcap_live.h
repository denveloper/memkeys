#ifndef _NET_PCAP_LIVE_H
#define _NET_PCAP_LIVE_H

#include "pcap.h"
#include "device.h"
#include "../common.h"

namespace mckeys {

class PcapLive : public Pcap
{
 public: 
  PcapLive(const Config * cfg);
  virtual ~PcapLive();

  Device getDevice() const
  { return device; }

  const char * getInterfaceC() { return getDevice().getDeviceName().c_str(); }
  std::string getInterface() const
  { return getDevice().getDeviceName(); }

  virtual void open();
  virtual bpf_u_int32 getSubnetMask() const;
  virtual bpf_u_int32 getIpAddress() const;

 private:
  const Config * config;
  const Device device;

};

}

#endif
