#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include "../Time/TimeService.h"
#include "../../header/Global/MediaFiles.h"
#include "../../Header/Element/DuckController.h"



namespace Element {
	
    class DuckService {
    private:

        sf::RenderWindow* game_window;
        Time::TimeService* time_service;

        const float spawn_interval = 2.f;
        std::vector<DuckController*> duck_list;
        float spawn_timer=0;
        sf::Texture duckTexture;
        sf::String duck1_texture_path= Global::Config::DuckFirst_path;
        sf::String duck2_texture_path = Global::Config::DuckSecond_path; 
        int blueDuckSpeed = 300;
        int orangeDuckSpeed = 500;

        void updateSpawnTimer();
        void processDuckSpawn();
        DuckType getDuckType();

    public:
        DuckService();
        virtual ~DuckService();

        void initialize();
        void update();
        void render();
        void reset();

        DuckController* spawnDuck();

        bool hasActiveDucks();
        void spawnMoreDucks(int noOfDuck);
        bool checkHit(sf::Vector2i mousePosition);
    };
}
