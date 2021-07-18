#ifndef TGBOT_CPP_VOICE_CHAT_SCHEDULED_H
#define TGBOT_CPP_VOICE_CHAT_SCHEDULED_H

#include <cstdint>
#include <memory>

namespace TgBot {

/**
 * @brief This object represents a service message about a voice chat scheduled in the chat.
 * @ingroup types
 */
class VoiceChatScheduled {

public:
    typedef std::shared_ptr<VoiceChatScheduled> Ptr;

    /**
     * @brief Point in time (Unix timestamp) when the voice chat is supposed to be started by a chat administrator
     */ 
    uint32_t startDate; 
};

}

#endif //TGBOT_CPP_VOICE_CHAT_SCHEDULED_H
