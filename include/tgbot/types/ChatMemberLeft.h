#ifndef TGBOT_CHAT_MEMBER_LEFT_H
#define TGBOT_CHAT_MEMBER_LEFT_H

#include "tgbot/types/User.h"

#include <cstdint>
#include <memory>
#include <string>

namespace TgBot {

/**
 * @brief Represents a chat member that isn't currently a member of the chat, but may join it themselves.
 * @ingroup types
 */
class ChatMemberLeft {
public:
    typedef std::shared_ptr<ChatMemberLeft> Ptr;

    /**
     * @brief The member's status in the chat. Can be “creator”, “administrator”, “member”, “restricted”, “left” or “kicked”
     */
    std::string status;

    /**
     * @brief Information about the user
     */
    User::Ptr user;
};
}

#endif //TGBOT_CHAT_MEMBER_LEFT_H
