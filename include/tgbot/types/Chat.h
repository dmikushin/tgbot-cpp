#ifndef TGBOT_CPP_CHAT_H
#define TGBOT_CPP_CHAT_H

#include "tgbot/types/ChatPhoto.h"
#include "tgbot/types/ChatPermissions.h"
#include "tgbot/types/ChatLocation.h"

#include <cstdint>
#include <string>
#include <memory>

namespace TgBot {

class Message;
/**
 * @brief This object represents a Telegram Chat
 * @ingroup types
 */
class Chat {

public:
    typedef std::shared_ptr<Chat> Ptr;

    /**
     * @brief Enum of possible types of a chat.
     */
    enum class Type {
        Private, Group, Supergroup, Channel
    };

    /**
     * @brief Unique identifier for this chat, not exceeding 1e13 by absolute value
     */
    std::int64_t id;

    /**
     * @brief Type of chat: can be either "private", "group", "supergroup, or "channel".
     */
    Type type;

    /**
     * @brief Optional. Title for channels and group chat
     */
    std::string title;

    /**
     * @brief Optional. Username for
     * private chats and channels
     */
    std::string username;

    /**
     * @brief Optional. First name of the
     * other party in private chat
     */
    std::string firstName;

    /**
     * @brief Optional. Last name of the
     * other party in private chat
     */
    std::string lastName;

    /**
     * @brief Optional. Chat photo.
     * Returned only in getChat.
     */
    ChatPhoto::Ptr photo;

    /**
     * @brief Optional. Bio of the other party in a private chat.
     * Returned only in getChat.
     */
    std::string bio;

    /**
     * @brief Optional. Description, for supergroups and channel chats.
     * Returned only in getChat.
     */
    std::string description;

    /**
     * @brief Optional. Chat invite link, for supergroups and channel chats.
     * Returned only in getChat.
     */
    std::string inviteLink;

    /**
     * @brief Optional. Pinned message, for supergroups and channel chats.
     * Returned only in getChat.
     */
    std::shared_ptr<Message> pinnedMessage;

    /**
     * @brief Optional. Default chat member permissions, for groups and supergroups.
     * Returned only in getChat.
     */
    ChatPermissions::Ptr permissions;

    /**
     * @brief Optional. For supergroups, the minimum allowed delay between consecutive 
     * messages sent by each unpriviledged user. Returned only in getChat.
     */
    int32_t slowModeDelay;

    /**
     * @brief Optional. The time after which all messages sent to the chat will be 
     * automatically deleted; in seconds. Returned only in getChat.
     */
    int32_t messageAutoDeleteTime;

    /**
     * @brief Optional. For supergroups, name of group sticker set.
     * Returned only in getChat.
     */
    std::string stickerSetName;

    /**
     * @brief Optional. True, if the bot can change the group sticker set.
     * Returned only in getChat.
     */
    bool canSetStickerSet;

    /**
     * @brief Optional. Unique identifier for the linked chat, i.e. the discussion group 
     * identifier for a channel and vice versa; for supergroups and channel chats. 
     * This identifier may be greater than 32 bits and some programming languages may 
     * have difficulty/silent defects in interpreting it. But it is smaller than 52 bits, 
     * so a signed 64 bit integer or double-precision float type are safe for storing 
     * this identifier. 
     * Returned only in getChat.
     */
    int64_t linkedChatId;

    /**
     * @brief Optional. For supergroups, the location to which the supergroup is connected. 
     * Returned only in getChat.
     */
    ChatLocation::Ptr location; 
};

}

#endif //TGBOT_CPP_CHAT_H
