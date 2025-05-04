#include "utils.hpp"

using namespace geode::prelude;

int levelthumbs::getQualityMultiplier(){
    return 4 / CCDirector::sharedDirector()->getContentScaleFactor();
}

std::string levelthumbs::getBaseUrl(){
    std::string baseURL = "https://cps.ps.fhgdps.com/geode/mods/levelthumbnails/thumbs";
    return baseURL;
}
