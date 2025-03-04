#include "utils.hpp"
#include <Geode/Geode.hpp>

using namespace geode::prelude;

int levelthumbs::getQualityMultiplier(){
    return 4 / CCDirector::sharedDirector()->getContentScaleFactor();
}

std::string levelthumbs::getBaseUrl() {
    std::string baseURL = "https://cps.ps.fhgdps.com/v1/thumbs";
    return baseURL;
}
