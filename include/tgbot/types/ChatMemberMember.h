#ifndef TGBOT_CHAT_MEMBER_MEMBER_H
#define TGBOT_CHAT_MEMBER_MEMBER_H

#include "tgbot/types/User.h"

#include <cstdint>
#include <memory>
#include <string>

namespace TgBot {

/**
 * @brief Represents a chat member that has no additional privileges or restrictions.
 * @ingroup types
 */
class ChatMemberMember {
public:
    typedef std::shared_ptr<ChatMemberMember> Ptr;

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

#endif //TGBOT_CHAT_MEMBER_OWNER_H
