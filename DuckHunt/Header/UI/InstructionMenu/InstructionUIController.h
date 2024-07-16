#pragma once
#include "../BaseUIController.h"
#include"../../Header/Global/MediaFiles.h"

namespace UI
{
    namespace InstructionMenu
    {
        class InstructionUIController : public BaseUIController
        {
        private:
           
			void processButtonInteractions() override;
        protected:
            const sf::String& getBackgroundTexturePath() const override { return Global::Config::instruction_path; }

        public:
            InstructionUIController();

            void initialize(sf::RenderWindow* w) override;
            void update() override;
        };
    }
}