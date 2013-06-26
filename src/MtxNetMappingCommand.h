/**
 *
 *
 */

#ifndef D_MTX_NETMAPPING_COMMAND_H
#define D_MTX_NETMAPPING_COMMAND_H

#include "TimeBasedCommand.h"

namespace aria2 {
//namespace mtx {

class DownloadEngine;

class MtxNetMappingCommand: public TimeBasedCommand {
public:
  MtxNetMappingCommand (cuid_t cuid, DownloadEngine* e, int port);

  virtual void preProcess();

  virtual void process();

  virtual void postProcess();

private:
  int port_;
};




//} // namespace mtx
} // namespace aria2






#endif  /* D_MTX_NETMAPPING_COMMAND_H */
