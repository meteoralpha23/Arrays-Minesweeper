#include "../../header/Gameplay/Board/BoardController.h"
#include "../../header/Gameplay/Board/BoardView.h"


namespace Gameplay
{
	namespace Board
	{
		using namespace Cell;

		BoardController::BoardController()
		{
			board_view = new BoardView(this);
			
		}

		BoardController::~BoardController()
		{
			destroy();
		}

		

		void BoardController::initialize()
		{
			board_view->initialize();
			cell->initialize();
			
		}

		

		void BoardController::update()
		{
			board_view->update();
			cell->update();
			
		}

		void BoardController::render()
		{
			board_view->render();
			cell->render();
			
		}

		void BoardController::reset()
		{
			resetBoard();
			cell->reset();
		}

		void BoardController::createBoard()
		{
			cell = new CellController();
		}

		void BoardController::resetBoard()
		{
		
		}

		void BoardController::deleteBoard()
		{
			delete(cell);
		}

		void BoardController::destroy()
		{
			deleteBoard();
			delete (board_view);
		}
	}
}