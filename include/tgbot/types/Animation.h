#ifndef TGBOT_ANIMATION_H
#define TGBOT_ANIMATION_H

#include "tgbot/types/PhotoSize.h"

#include <cstdint>
#include <memory>
#include <string>

namespace TgBot {

/**
 * @brief You can provide an animation for your game so that it looks stylish in chats (check out Lumberjack for an example).
 *
 * This object represents an animation file to be displayed in the message containing a game.
 *
 * @ingroup types
 */
class Animation {
public:
    typedef std::shared_ptr<Animation> Ptr;

    /**
     * @brief Unique file identifier.
     */
    std::string fileId;

    /**
     * @brief Unique identifier for this file, which is supposed to be the same over 
     * time and for different bots. Can't be used to download or reuse the file.
     */
    std::string fileUniqueId;

    /**
     * @brief Video width as defined by sender.
     */

    int32_t width;

    /**
     * @brief Video height as defined by sender.
     */

    int32_t height;

    /**
     * @brief Duration of the video in seconds as defined by sender.
     */

    int32_t duration;

    /**
     * @brief Optional. Animation thumbnail as defined by sender.
     */
    PhotoSize::Ptr thumb;

    /**
     * @brief Optional. Original animation filename as defined by sender.
     */
    std::string fileName;

    /**
     * @brief Optional. MIME type of the file as defined by sender.
     */
    std::string mimeType;

    /**
     * @brief Optional. File size.
     */
    std::int32_t fileSize;
};
}

#endif //TGBOT_ANIMATION_H
