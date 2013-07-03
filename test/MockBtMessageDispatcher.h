#ifndef D_MOCK_BT_MESSAGE_DISPATCHER_H
#define D_MOCK_BT_MESSAGE_DISPATCHER_H

#include "BtMessageDispatcher.h"

#include <algorithm>

#include "BtMessage.h"
#include "Piece.h"

namespace aria2 {

class MockBtMessageDispatcher : public BtMessageDispatcher {
public:
  std::deque<std::unique_ptr<BtMessage>> messageQueue;

  virtual ~MockBtMessageDispatcher() {}

  virtual void addMessageToQueue(std::unique_ptr<BtMessage> btMessage) {
    messageQueue.push_back(std::move(btMessage));
  }

  virtual void sendMessages() {}

  virtual void doCancelSendingPieceAction
  (size_t index, int32_t begin, int32_t length) {}

  virtual void doCancelSendingPieceAction(const std::shared_ptr<Piece>& piece) {}

  virtual void doAbortOutstandingRequestAction(const std::shared_ptr<Piece>& piece) {}

  virtual void doChokedAction() {}

  virtual void doChokingAction() {}

  virtual void checkRequestSlotAndDoNecessaryThing() {}

  virtual bool isSendingInProgress() {
    return false;
  }

  virtual size_t countMessageInQueue() {
    return messageQueue.size();
  }

  virtual size_t countOutstandingRequest() {
    return 0;
  }

  virtual bool isOutstandingRequest(size_t index, size_t blockIndex) {
    return false;
  }

  virtual const RequestSlot* getOutstandingRequest
  (size_t index, int32_t begin, int32_t length) {
    return nullptr;
  }

  virtual void removeOutstandingRequest(const RequestSlot* slot) {}

  virtual void addOutstandingRequest(std::unique_ptr<RequestSlot> slot) {}

  virtual size_t countOutstandingUpload()
  {
    return 0;
  }
};

} // namespace aria2

#endif // D_MOCK_BT_MESSAGE_DISPATCHER_H
