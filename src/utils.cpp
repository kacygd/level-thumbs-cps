#include "utils.hpp"
#include <Geode/Geode.hpp>

using namespace geode::prelude;

int levelthumbs::getQualityMultiplier(){
    return 4 / CCDirector::sharedDirector()->getContentScaleFactor();
}

std::string levelthumbs::getBaseUrl() {
    std::string baseURL = "https://cdn.jsdelivr.net/gh/kacygd/cps-thumbnails@main/thumbs";
    return baseURL;
}
