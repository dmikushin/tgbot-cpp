#ifndef TGBOT_CPP_VOICE_CHAT_ENDED_H
#define TGBOT_CPP_VOICE_CHAT_ENDED_H

#include <cstdint>
#include <memory>

namespace TgBot {

/**
 * @brief This object represents a service message about a voice chat ended in the chat.
 * @ingroup types
 */
class VoiceChatEnded {

public:
    typedef std::shared_ptr<VoiceChatEnded> Ptr;

    /**
     * @brief Voice chat duration; in seconds
     */ 
    uint32_t duration; 
};

}

#endif //TGBOT_CPP_VOICE_CHAT_SCHEDULED_H
