#ifndef TGBOT_POLL_ANSWER_H
#define TGBOT_POLL_ANSWER_H

#include "tgbot/types/User.h"

#include <cstdint>
#include <memory>
#include <string>
#include <vector>

namespace TgBot {

class PollAnswer {

public:
    typedef std::shared_ptr<PollAnswer> Ptr;

    /**
     * @brief Unique poll identifier
     */
    std::string pollId;

    /**
     * @brief The user, who changed the answer to the poll
     */
    User::Ptr user;

    /**
     * @brief 0-based identifiers of answer options, chosen by the user. 
     * May be empty if the user retracted their vote.
     */
    std::vector<std::int32_t> optionIds;
};

}

#endif //TGBOT_POLL_ANSWER_H
