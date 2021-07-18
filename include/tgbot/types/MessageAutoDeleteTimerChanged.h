#ifndef TGBOT_CPP_MESSAGE_AUTO_DELETE_TIMER_CHANGED_H
#define TGBOT_CPP_MESSAGE_AUTO_DELETE_TIMER_CHANGED_H

#include "tgbot/types/User.h"
#include <cstdint>
#include <string>
#include <memory>

namespace TgBot {

/**
 * @brief This object represents a service message about a change in auto-delete timer settings..
 * @ingroup types
 */
class MessageAutoDeleteTimerChanged {

public:
    typedef std::shared_ptr<MessageAutoDeleteTimerChanged> Ptr;

    /**
     * @brief New auto-delete time for messages in the chat
     */ 
    uint32_t mssageAutoDeleteTime; 
};

}

#endif //TGBOT_CPP_MESSAGE_AUTO_DELETE_TIMER_CHANGED_H
