#ifndef TGBOT_CHAT_MEMBER_ADMINISTRATOR_H
#define TGBOT_CHAT_MEMBER_ADMINISTRATOR_H

#include "tgbot/types/User.h"

#include <cstdint>
#include <memory>
#include <string>

namespace TgBot {

/**
 * @brief Represents a chat member that has some additional privileges.
 * @ingroup types
 */
class ChatMemberAdministrator {
public:
    typedef std::shared_ptr<ChatMemberAdministrator> Ptr;

    /**
     * @brief The member's status in the chat. Can be “creator”, “administrator”, “member”, “restricted”, “left” or “kicked”
     */
    std::string status;

    /**
     * @brief Information about the user
     */
    User::Ptr user;

    /**
     * @brief True, if the bot is allowed to edit administrator privileges of that user
     */
    bool canBeEdited;

    /**
     * @brief True, if the user's presence in the chat is hidden
     */
    bool isAnonymous;

    /**
     * @brief True, if the administrator can access the chat event log, chat statistics, message statistics in channels, see channel members, see anonymous administrators in supergroups and ignore slow mode. Implied by any other administrator privilege
     */
    bool canManageChat;

    /**
     * @brief 	True, if the administrator can delete messages of other users
     */
    bool canDeleteMessages;

    /**
     * @brief True, if the administrator can manage voice chats
     */
    bool canManageVoiceChats;

    /**
     * @brief True, if the administrator can restrict, ban or unban chat members
     */
    bool canRestrictMembers;

    /**
     * @brief True, if the administrator can add new administrators with a subset of their own privileges or demote administrators that he has promoted, directly or indirectly (promoted by administrators that were appointed by the user)
     */
    bool canPromoteMembers;

    /**
     * @brief True, if the user is allowed to change the chat title, photo and other settings
     */
    bool canChangeInfo;

    /**
     * @brief True, if the user is allowed to invite new users to the chat
     */
    bool canInviteUsers;

    /**
     * @brief Optional. True, if the administrator can post in the channel; channels only
     */
    bool canPostMessages = false;

    /**
     * @brief Optional. True, if the administrator can edit messages of other users and can pin messages; channels only
     */
    bool canEditMessages = false;

    /**
     * @brief Optional. True, if the user is allowed to pin messages; groups and supergroups only
     */
    bool canPinMessages = false;

    /**
     * @brief Optional. Custom title for this user
     */
    std::string custom_title;
};
}

#endif //TGBOT_CHAT_MEMBER_ADMINISTRATOR_H
