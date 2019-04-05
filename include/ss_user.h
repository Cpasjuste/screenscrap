//
// Created by cpasjuste on 05/04/19.
//

#ifndef SCREENSCRAP_SS_USER_H
#define SCREENSCRAP_SS_USER_H

namespace ss_api {

    class User {

    public:

        std::string id;
        std::string niveau;
        std::string contribution;
        std::string uploadsysteme;
        std::string uploadinfos;
        std::string romasso;
        std::string uploadmedia;
        std::string maxthreads;
        std::string maxdownloadspeed;
        std::string requeststoday;
        std::string maxrequestsperday;
        std::string visites;
        std::string datedernierevisite;
        std::string favregion;
    };
}

#endif //SCREENSCRAP_SS_USER_H
