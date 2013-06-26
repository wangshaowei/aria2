/**
 *
 *
 *
 */

#ifndef D_MTXPING_RPCMETHOD_H
#define D_MTXPING_RPCMETHOD_H

#include "RpcMethod.h"

#include <cassert>
#include <deque>
#include <algorithm>

#include "RpcRequest.h"
#include "ValueBase.h"
#include "TorrentAttribute.h"
#include "DlAbortEx.h"
#include "fmt.h"
#include "IndexedList.h"
#include "GroupId.h"
#include "RequestGroupMan.h"

namespace aria2 {

class MtxPingRpcMethod:public rpc::RpcMethod {
protected:
  virtual std::shared_ptr<ValueBase> process(const rpc::RpcRequest& req, DownloadEngine* e);
public:
  static const char* getMethodName()
  {
    return "mtx.ping";
  }
};


}

#endif
