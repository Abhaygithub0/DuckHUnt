#pragma once
#include <SFML/Graphics.hpp>
#include "../BaseUIController.h"
#include"../../Header/Global/MediaFiles.h"

namespace UI
{
	namespace PauseMenu
	{
        class PauseMenuUIController : public UI::BaseUIController
        {
        private:
           
            sf::Font font;
            sf::Text highScoreText;

            void processButtonInteractions() override;
        protected:
            const sf::String& getBackgroundTexturePath() const override { return Global::Config::Pausemenu_image_path; }

        public:
            PauseMenuUIController();
            void initialize(sf::RenderWindow* window) override;
            void update() override;
            void render() override;
        };
	}
}
