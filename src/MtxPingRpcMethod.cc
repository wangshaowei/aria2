/**
 *
 *
 */

#include "MtxPingRpcMethod.h"
#include "ValueBase.h"
#include "LogFactory.h"

namespace aria2 {
//namespace mtx {

SharedHandle<ValueBase>
MtxPingRpcMethod::process(const rpc::RpcRequest& req,
							   DownloadEngine* e)
{
	SharedHandle<String> version;
	SharedHandle<ValueBase>& tempParams = req.params_dict->get("version");
	if (tempParams && downcast<String>(tempParams)) {
		version = static_pointer_cast<String>(tempParams);
	}

	return String::g("pong");
}

//}	// namespace mtx
}	// namespace aria2



