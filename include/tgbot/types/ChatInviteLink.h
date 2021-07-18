#ifndef TGBOT_CPP_CHAT_INVITE_LINK_H
#define TGBOT_CPP_CHAT_INVITE_LINK_H

#include "tgbot/types/User.h"

#include <cstdint>
#include <string>
#include <memory>

namespace TgBot {

/**
 * @brief This object represents a Telegram Chat
 * @ingroup types
 */
class ChatinviteLink {

public:
    typedef std::shared_ptr<ChatinviteLink> Ptr;


    /**
     * @brief The invite link. If the link was created by another chat administrator, 
     * then the second part of the link will be replaced with “…”.
     */
    std::string inviteLink;

    /**
     * @brief Creator of the link
     */
    User::Ptr user;

    /**
     * @brief True, if the link is primary
     */

    bool isPrimary; 

    /**
     * @brief True, if the link is revoked
     */
    bool isRevoked;

    /**
     * @brief Optional. Point in time (Unix timestamp) 
     * when the link will expire or has been expired
     */
    int32_t expireDate;

    /**
     * @brief Optional. Maximum number of users that can be members of the chat simultaneously after joining
     *  the chat via this invite link; 1-99999
     */
    int32_t memberLimit;
};

}

#endif //TGBOT_CPP_CHAT_INVITE_LINK_H
