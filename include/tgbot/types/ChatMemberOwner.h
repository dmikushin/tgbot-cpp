#ifndef TGBOT_CHAT_MEMBER_OWNER_H
#define TGBOT_CHAT_MEMBER_OWNER_H

#include "tgbot/types/User.h"

#include <cstdint>
#include <memory>
#include <string>

namespace TgBot {

/**
 * @brief Represents a chat member that owns the chat and has all administrator privileges.
 * @ingroup types
 */
class ChatMemberOwner {
public:
    typedef std::shared_ptr<ChatMemberOwner> Ptr;

    /**
     * @brief The member's status in the chat. Can be “creator”, “administrator”, “member”, “restricted”, “left” or “kicked”
     */
    std::string status;

    /**
     * @brief Information about the user
     */
    User::Ptr user;

    /**
     * @brief True, if the user's presence in the chat is hidden
     */
    bool isAnonymous;

    /**
     * @brief Optional. Custom title for this user
     */  
    std::string customTitle;
};
}

#endif //TGBOT_CHAT_MEMBER_OWNER_H
