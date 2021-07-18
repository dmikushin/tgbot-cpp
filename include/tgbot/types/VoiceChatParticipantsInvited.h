#ifndef TGBOT_CPP_VOICE_CHAT_PARTICIPANTS_INVITED_H
#define TGBOT_CPP_VOICE_CHAT_PARTICIPANTS_INVITED_H

#include "tgbot/types/User.h"
#include <cstdint>
#include <memory>

namespace TgBot {

/**
 * @brief This object represents a service message about new members invited to a voice chat.
 * @ingroup types
 */
class VoiceChatParticipantsInvited {

public:
    typedef std::shared_ptr<VoiceChatParticipantsInvited> Ptr;

    std::vector<User::Ptr> users;
};

}

#endif //TGBOT_CPP_VOICE_CHAT_PARTICIPANTS_INVITED_H
