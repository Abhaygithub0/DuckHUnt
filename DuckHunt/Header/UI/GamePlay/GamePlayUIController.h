#pragma once
#include <SFML/Graphics.hpp>
#include "../BaseUIController.h"
#include"../../Header/Global/MediaFiles.h"

namespace UI
{
    using namespace Global;
	namespace GamePlayUI

	{
        
        class GamePlayUIController : public BaseUIController
        {
        private:
           
             void processButtonInteractions() override;
        protected:
            const sf::String& getBackgroundTexturePath() const override { return Global::Config::background_path;}
          
        public:
            GamePlayUIController();
            void initialize(sf::RenderWindow* window) override;
            void update() override;
        };
	}
}
