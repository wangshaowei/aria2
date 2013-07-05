#ifndef D_MOCK_BT_MESSAGE_FACTORY_H
#define D_MOCK_BT_MESSAGE_FACTORY_H

#include "BtMessageFactory.h"

#include "BtHandshakeMessage.h"
#include "BtRequestMessage.h"
#include "BtCancelMessage.h"
#include "BtPieceMessage.h"
#include "BtHaveMessage.h"
#include "BtChokeMessage.h"
#include "BtUnchokeMessage.h"
#include "BtInterestedMessage.h"
#include "BtNotInterestedMessage.h"
#include "BtBitfieldMessage.h"
#include "BtKeepAliveMessage.h"
#include "BtHaveAllMessage.h"
#include "BtHaveNoneMessage.h"
#include "BtRejectMessage.h"
#include "BtAllowedFastMessage.h"
#include "BtPortMessage.h"
#include "BtExtendedMessage.h"
#include "ExtensionMessage.h"

namespace aria2 {

class ExtensionMessage;

class MockBtMessageFactory : public BtMessageFactory {
public:
  MockBtMessageFactory() {}

  virtual ~MockBtMessageFactory() {}

  virtual std::unique_ptr<BtMessage>
  createBtMessage(const unsigned char* msg, size_t msgLength) {
    return nullptr;
  };

  virtual std::unique_ptr<BtHandshakeMessage>
  createHandshakeMessage(const unsigned char* msg, size_t msgLength) {
    return nullptr;
  }

  virtual std::unique_ptr<BtHandshakeMessage>
  createHandshakeMessage(const unsigned char* infoHash,
                         const unsigned char* peerId) {
    return nullptr;
  }

  virtual std::unique_ptr<BtRequestMessage>
  createRequestMessage(const std::shared_ptr<Piece>& piece, size_t blockIndex) {
    return nullptr;
  }

  virtual std::unique_ptr<BtCancelMessage>
  createCancelMessage(size_t index, int32_t begin, int32_t length) {
    return nullptr;
  }

  virtual std::unique_ptr<BtPieceMessage>
  createPieceMessage(size_t index, int32_t begin, int32_t length) {
    return nullptr;
  }

  virtual std::unique_ptr<BtHaveMessage> createHaveMessage(size_t index) {
    return nullptr;
  }

  virtual std::unique_ptr<BtChokeMessage> createChokeMessage() {
    return nullptr;
  }

  virtual std::unique_ptr<BtUnchokeMessage> createUnchokeMessage() {
    return nullptr;
  }

  virtual std::unique_ptr<BtInterestedMessage> createInterestedMessage() {
    return nullptr;
  }

  virtual std::unique_ptr<BtNotInterestedMessage> createNotInterestedMessage() {
    return nullptr;
  }

  virtual std::unique_ptr<BtBitfieldMessage> createBitfieldMessage() {
    return nullptr;
  }

  virtual std::unique_ptr<BtKeepAliveMessage> createKeepAliveMessage() {
    return nullptr;
  }

  virtual std::unique_ptr<BtHaveAllMessage> createHaveAllMessage() {
    return nullptr;
  }

  virtual std::unique_ptr<BtHaveNoneMessage> createHaveNoneMessage() {
    return nullptr;
  }

  virtual std::unique_ptr<BtRejectMessage>
  createRejectMessage(size_t index, int32_t begin, int32_t length) {
    return nullptr;
  }

  virtual std::unique_ptr<BtAllowedFastMessage> createAllowedFastMessage
  (size_t index) {
    return nullptr;
  }

  virtual std::unique_ptr<BtPortMessage> createPortMessage(uint16_t port)
  {
    return nullptr;
  }

  virtual std::unique_ptr<BtExtendedMessage>
  createBtExtendedMessage(std::unique_ptr<ExtensionMessage> extmsg)
  {
    return nullptr;
  }
};

} // namespace aria2

#endif // D_MOCK_BT_MESSAGE_FACTORY_H
