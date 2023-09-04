namespace hellmath {

// TODO: Task 1 - Define an `AccountStatus` enumeration to represent the four
// account types: `troll`, `guest`, `user`, and `mod`.
    enum class AccountStatus
    {
        troll,
        guest,
        user,
        mod
    };
// TODO: Task 1 - Define an `Action` enumeration to represent the three
// permission types: `read`, `write`, and `remove`.
    enum class Action
    {
        read,
        write,
        remove
    };
// TODO: Task 2 - Implement the `display_post` function, that gets two arguments
// of `AccountStatus` and returns a `bool`. The first argument is the status of
// the poster, the second one is the status of the viewer.
    bool display_post(AccountStatus AStatus,AccountStatus BStatus){
        if(AStatus == AccountStatus::troll && BStatus == AStatus)
            {return true;}
        return (AStatus != AccountStatus::troll);
    }
// TODO: Task 3 - Implement the `permission_check` function, that takes an
// `Action` as a first argument and an `AccountStatus` to check against. It
// should return a `bool`.
    bool permission_check(Action action,AccountStatus status){

        if(action == Action::read){return true;}
        // read and write
        else if (action == Action::write && status != AccountStatus::guest){
            return true;
        }
        // all permission
        else if (action == Action::remove && status == AccountStatus::mod){
            return true;
        }
        return false;
    }
// TODO: Task 4 - Implement the `valid_player_combination` function that
// checks if two players can join the same game. The function has two parameters
// of type `AccountStatus` and returns a `bool`.
bool valid_player_combination(AccountStatus StatusA,AccountStatus StatusB){
        // troll : troll = true
        // else troll = false
        // mod : not troll  and not guest == true
        // user : user or mods = true
        // guest : any = false
        switch (StatusA)
        {
            case AccountStatus::troll:
                return (StatusB == AccountStatus::troll);
                break;
            case AccountStatus::guest:
                return false;
                break;
            case AccountStatus::mod || AccountStatus::user:
                return (StatusB == AccountStatus::mod || StatusB == AccountStatus::user);
                break;
            default:
                return false;
        }
        if(StatusA == AccountStatus::troll && StatusB == AccountStatus::troll) return true;
        if(StatusA == AccountStatus::guest) return false;
        else if (StatusA == AccountStatus::mod && (StatusB == AccountStatus::mod || StatusB ==
                     AccountStatus::user)) return true;
        else if (StatusA == AccountStatus::user && (StatusB == AccountStatus::mod || StatusB ==
                    AccountStatus::user)) return true;
        return false;
    }
// TODO: Task 5 - Implement the `has_priority` function that takes two
// `AccountStatus` arguments and returns `true`, if and only if the first
// account has a strictly higher priority than the second.
bool has_priority(AccountStatus StatusA,AccountStatus StatusB){
        return static_cast<int>(StatusA) > static_cast<int>(StatusB);
    }

}  // namespace hellmath