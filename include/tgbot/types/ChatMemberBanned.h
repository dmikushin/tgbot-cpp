#ifndef TGBOT_CHAT_MEMBER_BANNED_H
#define TGBOT_CHAT_MEMBER_BANNED_H

#include "tgbot/types/User.h"

#include <cstdint>
#include <memory>
#include <string>

namespace TgBot {

/**
 * @brief Represents a chat member that was banned in the chat and can't return to the chat or view chat messages.
 * @ingroup types
 */
class ChatMemberBanned {
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

    /**
     * @brief Date when restrictions will be lifted for this user; unix time. If 0, then the user is restricted forever
     */
    int32_t untilDate;
};
}

#endif //TGBOT_CHAT_MEMBER_OWNER_H
