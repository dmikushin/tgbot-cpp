#ifndef TGBOT_CHAT_MEMBER_UPDATED_H
#define TGBOT_CHAT_MEMBER_UPDATED_H

#include "tgbot/types/User.h"
#include "tgbot/types/Chat.h"
#include "tgbot/types/ChatMember.h"
#include "tgbot/types/ChatInviteLink.h"

#include <cstdint>
#include <memory>
#include <string>

namespace TgBot {

/**
 * @brief This object represents changes in the status of a chat member.
 * @ingroup types
 */
class ChatMemberUpdated {
public:
    typedef std::shared_ptr<ChatMemberUpdated> Ptr;

    /**
     * @brief
     */
    Chat::Ptr chat;

    /**
     * @brief Information about the user
     */
    User::Ptr from;

    /**
     * @brief Information about the user
     */
    uint32_t date;

    /**
     * @brief
     */
    ChatMember::Ptr oldChatMember;

    /**
     * @brief
     */
    ChatMember::Ptr newChatMember;

    /**
     * @brief
     */
    ChatInvitLink::Ptr inviteLink;
};
}

#endif //TGBOT_CHAT_MEMBER_UPDATED_H
