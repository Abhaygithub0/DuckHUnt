#pragma once
#include <SFML/Graphics.hpp>
#include "../BaseUIController.h"
#include"../../Header/Global/MediaFiles.h"

namespace UI
{
	namespace MainMenu
	{
		class MainMenuUIController : public BaseUIController
		{
		private:
			

			sf::Font font;
			sf::Text highScoreText;
			void processButtonInteractions() override;

		protected:
			const sf::String& getBackgroundTexturePath() const override { return Global::Config::Mainmenu_image_path; }
		public:
			MainMenuUIController();

			void initialize(sf::RenderWindow* window) override;
			void update() override;
			void render() override;

		};
	}
}
