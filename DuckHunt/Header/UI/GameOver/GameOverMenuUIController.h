#pragma once
#include <SFML/Graphics.hpp>

#include "../BaseUIController.h"
#include"../../Header/Global/MediaFiles.h"

namespace UI
{
  
	namespace GameOverMenu
	{
        class GameOverMenuUIController : public BaseUIController
        {
        private:
            sf::Font font;
            sf::Text highScoreText;
            sf::Text scoreText;

        	
        	void processButtonInteractions() override;
        protected:
        	const sf::String& getBackgroundTexturePath() const override { return Global::Config::GameOver_path; }

        public:
            GameOverMenuUIController();
            void initialize(sf::RenderWindow* window) override;
        	void update() override;
            void render() override;
        };
	}
}
