#include "card_methods.h"

//-----------------------------------------------------------------------------------------
bool card_methods::load_card_image(const std::pair<card_suit, int>& card, String^% way)
{
	// 6
	if ((card.first == card_suit::hearts) && (card.second == 6))
	{
		way = "cards_images/6_hearts.PNG";
		return true;
	}
	if ((card.first == card_suit::clubs) && (card.second == 6))
	{
		way = "cards_images/6_clubs.PNG";
		return true;
	}
	if ((card.first == card_suit::diamonds) && (card.second == 6))
	{
		way = "cards_images/6_diamonds.PNG";
		return true;
	}
	if ((card.first == card_suit::spades) && (card.second == 6))
	{
		way = "cards_images/6_spades.PNG";
		return true;
	}
	// 7
	if ((card.first == card_suit::hearts) && (card.second == 7))
	{
		way = "cards_images/7_hearts.PNG";
		return true;
	}
	if ((card.first == card_suit::clubs) && (card.second == 7))
	{
		way = "cards_images/7_clubs.PNG";
		return true;
	}
	if ((card.first == card_suit::diamonds) && (card.second == 7))
	{
		way = "cards_images/7_diamonds.PNG";
		return true;
	}
	if ((card.first == card_suit::spades) && (card.second == 7))
	{
		way = "cards_images/7_spades.PNG";
		return true;
	}
	// 8
	if ((card.first == card_suit::hearts) && (card.second == 8))
	{
		way = "cards_images/8_hearts.PNG";
		return true;
	}
	if ((card.first == card_suit::clubs) && (card.second == 8))
	{
		way = "cards_images/8_clubs.PNG";
		return true;
	}
	if ((card.first == card_suit::diamonds) && (card.second == 8))
	{
		way = "cards_images/8_diamonds.PNG";
		return true;
	}
	if ((card.first == card_suit::spades) && (card.second == 8))
	{
		way = "cards_images/8_spades.PNG";
		return true;
	}
	// 9
	if ((card.first == card_suit::hearts) && (card.second == 9))
	{
		way = "cards_images/9_hearts.PNG";
		return true;
	}
	if ((card.first == card_suit::clubs) && (card.second == 9))
	{
		way = "cards_images/9_clubs.PNG";
		return true;
	}
	if ((card.first == card_suit::diamonds) && (card.second == 9))
	{
		way = "cards_images/9_diamonds.PNG";
		return true;
	}
	if ((card.first == card_suit::spades) && (card.second == 9))
	{
		way = "cards_images/9_spades.PNG";
		return true;
	}
	// 10
	if ((card.first == card_suit::hearts) && (card.second == 10))
	{
		way = "cards_images/10_hearts.PNG";
		return true;
	}
	if ((card.first == card_suit::clubs) && (card.second == 10))
	{
		way = "cards_images/10_clubs.PNG";
		return true;
	}
	if ((card.first == card_suit::diamonds) && (card.second == 10))
	{
		way = "cards_images/10_diamonds.PNG";
		return true;
	}
	if ((card.first == card_suit::spades) && (card.second == 10))
	{
		way = "cards_images/10_spades.PNG";
		return true;
	}
	// J
	if ((card.first == card_suit::hearts) && (card.second == 11))
	{
		way = "cards_images/J_hearts.PNG";
		return true;
	}
	if ((card.first == card_suit::clubs) && (card.second == 11))
	{
		way = "cards_images/J_clubs.PNG";
		return true;
	}
	if ((card.first == card_suit::diamonds) && (card.second == 11))
	{
		way = "cards_images/J_diamonds.PNG";
		return true;
	}
	if ((card.first == card_suit::spades) && (card.second == 11))
	{
		way = "cards_images/J_spades.PNG";
		return true;
	}
	// Q
	if ((card.first == card_suit::hearts) && (card.second == 12))
	{
		way = "cards_images/Q_hearts.PNG";
		return true;
	}
	if ((card.first == card_suit::clubs) && (card.second == 12))
	{
		way = "cards_images/Q_clubs.PNG";
		return true;
	}
	if ((card.first == card_suit::diamonds) && (card.second == 12))
	{
		way = "cards_images/Q_diamonds.PNG";
		return true;
	}
	if ((card.first == card_suit::spades) && (card.second == 12))
	{
		way = "cards_images/Q_spades.PNG";
		return true;
	}
	// K
	if ((card.first == card_suit::hearts) && (card.second == 13))
	{
		way = "cards_images/K_hearts.PNG";
		return true;
	}
	if ((card.first == card_suit::clubs) && (card.second == 13))
	{
		way = "cards_images/K_clubs.PNG";
		return true;
	}
	if ((card.first == card_suit::diamonds) && (card.second == 13))
	{
		way = "cards_images/K_diamonds.PNG";
		return true;
	}
	if ((card.first == card_suit::spades) && (card.second == 13))
	{
		way = "cards_images/K_spades.PNG";
		return true;
	}
	// A
	if ((card.first == card_suit::hearts) && (card.second == 14))
	{
		way = "cards_images/A_hearts.PNG";
		return true;
	}
	if ((card.first == card_suit::clubs) && (card.second == 14))
	{
		way = "cards_images/A_clubs.PNG";
		return true;
	}
	if ((card.first == card_suit::diamonds) && (card.second == 14))
	{
		way = "cards_images/A_diamonds.PNG";
		return true;
	}
	if ((card.first == card_suit::spades) && (card.second == 14))
	{
		way = "cards_images/A_spades.PNG";
		return true;
	}

	// if not found
	return false;
}
//-----------------------------------------------------------------------------------------
bool card_methods::index_by_card(String^% indx, const std::pair<card_suit, int>& card)
{
	// 6
	if ((card.first == card_suit::hearts) && (card.second == 6))
	{
		indx = "1";
		return true;
	}
	if ((card.first == card_suit::clubs) && (card.second == 6))
	{
		indx = "2";
		return true;
	}
	if ((card.first == card_suit::diamonds) && (card.second == 6))
	{
		indx = "3";
		return true;
	}
	if ((card.first == card_suit::spades) && (card.second == 6))
	{
		indx = "4";
		return true;
	}
	// 7
	if ((card.first == card_suit::hearts) && (card.second == 7))
	{
		indx = "5";
		return true;
	}
	if ((card.first == card_suit::clubs) && (card.second == 7))
	{
		indx = "6";
		return true;
	}
	if ((card.first == card_suit::diamonds) && (card.second == 7))
	{
		indx = "7";
		return true;
	}
	if ((card.first == card_suit::spades) && (card.second == 7))
	{
		indx = "8";
		return true;
	}
	// 8
	if ((card.first == card_suit::hearts) && (card.second == 8))
	{
		indx = "9";
		return true;
	}
	if ((card.first == card_suit::clubs) && (card.second == 8))
	{
		indx = "10";
		return true;
	}
	if ((card.first == card_suit::diamonds) && (card.second == 8))
	{
		indx = "11";
		return true;
	}
	if ((card.first == card_suit::spades) && (card.second == 8))
	{
		indx = "12";
		return true;
	}
	// 9
	if ((card.first == card_suit::hearts) && (card.second == 9))
	{
		indx = "13";
		return true;
	}
	if ((card.first == card_suit::clubs) && (card.second == 9))
	{
		indx = "14";
		return true;
	}
	if ((card.first == card_suit::diamonds) && (card.second == 9))
	{
		indx = "15";
		return true;
	}
	if ((card.first == card_suit::spades) && (card.second == 9))
	{
		indx = "16";
		return true;
	}
	// 10
	if ((card.first == card_suit::hearts) && (card.second == 10))
	{
		indx = "17";
		return true;
	}
	if ((card.first == card_suit::clubs) && (card.second == 10))
	{
		indx = "18";
		return true;
	}
	if ((card.first == card_suit::diamonds) && (card.second == 10))
	{
		indx = "19";
		return true;
	}
	if ((card.first == card_suit::spades) && (card.second == 10))
	{
		indx = "20";
		return true;
	}
	// J
	if ((card.first == card_suit::hearts) && (card.second == 11))
	{
		indx = "21";
		return true;
	}
	if ((card.first == card_suit::clubs) && (card.second == 11))
	{
		indx = "22";
		return true;
	}
	if ((card.first == card_suit::diamonds) && (card.second == 11))
	{
		indx = "23";
		return true;
	}
	if ((card.first == card_suit::spades) && (card.second == 11))
	{
		indx = "24";
		return true;
	}
	// Q
	if ((card.first == card_suit::hearts) && (card.second == 12))
	{
		indx = "25";
		return true;
	}
	if ((card.first == card_suit::clubs) && (card.second == 12))
	{
		indx = "26";
		return true;
	}
	if ((card.first == card_suit::diamonds) && (card.second == 12))
	{
		indx = "27";
		return true;
	}
	if ((card.first == card_suit::spades) && (card.second == 12))
	{
		indx = "28";
		return true;
	}
	// K
	if ((card.first == card_suit::hearts) && (card.second == 13))
	{
		indx = "29";
		return true;
	}
	if ((card.first == card_suit::clubs) && (card.second == 13))
	{
		indx = "30";
		return true;
	}
	if ((card.first == card_suit::diamonds) && (card.second == 13))
	{
		indx = "31";
		return true;
	}
	if ((card.first == card_suit::spades) && (card.second == 13))
	{
		indx = "32";
		return true;
	}
	// A
	if ((card.first == card_suit::hearts) && (card.second == 14))
	{
		indx = "33";
		return true;
	}
	if ((card.first == card_suit::clubs) && (card.second == 14))
	{
		indx = "34";
		return true;
	}
	if ((card.first == card_suit::diamonds) && (card.second == 14))
	{
		indx = "35";
		return true;
	}
	if ((card.first == card_suit::spades) && (card.second == 14))
	{
		indx = "36";
		return true;
	}

	// if not found
	return false;
}
//-----------------------------------------------------------------------------------------
bool card_methods::card_by_index(std::pair<card_suit, int>& card,String^% indx)
{
	// 6
	if (String::Equals(indx, "1"))
	{
		card = std::make_pair(card_suit::hearts, 6);
		return true;
	}
	if (String::Equals(indx, "2"))
	{
		card = std::make_pair(card_suit::clubs, 6);
		return true;
	}
	if (String::Equals(indx, "3"))
	{
		card = std::make_pair(card_suit::diamonds, 6);
		return true;
	}
	if (String::Equals(indx, "4"))
	{
		card = std::make_pair(card_suit::spades, 6);
		return true;
	}
	// 7
	if (String::Equals(indx, "5"))
	{
		card = std::make_pair(card_suit::hearts, 7);
		return true;
	}
	if (String::Equals(indx, "6"))
	{
		card = std::make_pair(card_suit::clubs, 7);
		return true;
	}
	if (String::Equals(indx, "7"))
	{
		card = std::make_pair(card_suit::diamonds, 7);
		return true;
	}
	if (String::Equals(indx, "8"))
	{
		card = std::make_pair(card_suit::spades, 7);
		return true;
	}
	// 8
	if (String::Equals(indx, "9"))
	{
		card = std::make_pair(card_suit::hearts, 8);
		return true;
	}
	if (String::Equals(indx, "10"))
	{
		card = std::make_pair(card_suit::clubs, 8);
		return true;
	}
	if (String::Equals(indx, "11"))
	{
		card = std::make_pair(card_suit::diamonds, 8);
		return true;
	}
	if (String::Equals(indx, "12"))
	{
		card = std::make_pair(card_suit::spades, 8);
		return true;
	}
	// 9
	if (String::Equals(indx, "13"))
	{
		card = std::make_pair(card_suit::hearts, 9);
		return true;
	}
	if (String::Equals(indx, "14"))
	{
		card = std::make_pair(card_suit::clubs, 9);
		return true;
	}
	if (String::Equals(indx, "15"))
	{
		card = std::make_pair(card_suit::diamonds, 9);
		return true;
	}
	if (String::Equals(indx, "16"))
	{
		card = std::make_pair(card_suit::spades, 9);
		return true;
	}
	// 10
	if (String::Equals(indx, "17"))
	{
		card = std::make_pair(card_suit::hearts, 10);
		return true;
	}
	if (String::Equals(indx, "18"))
	{
		card = std::make_pair(card_suit::clubs, 10);
		return true;
	}
	if (String::Equals(indx, "19"))
	{
		card = std::make_pair(card_suit::diamonds, 10);
		return true;
	}
	if (String::Equals(indx, "20"))
	{
		card = std::make_pair(card_suit::spades, 10);
		return true;
	}
	// J
	if (String::Equals(indx, "21"))
	{
		card = std::make_pair(card_suit::hearts, 11);
		return true;
	}
	if (String::Equals(indx, "22"))
	{
		card = std::make_pair(card_suit::clubs, 11);
		return true;
	}
	if (String::Equals(indx, "23"))
	{
		card = std::make_pair(card_suit::diamonds, 11);
		return true;
	}
	if (String::Equals(indx, "24"))
	{
		card = std::make_pair(card_suit::spades, 11);
		return true;
	}
	// Q
	if (String::Equals(indx, "25"))
	{
		card = std::make_pair(card_suit::hearts, 12);
		return true;
	}
	if (String::Equals(indx, "26"))
	{
		card = std::make_pair(card_suit::clubs, 12);
		return true;
	}
	if (String::Equals(indx, "27"))
	{
		card = std::make_pair(card_suit::diamonds, 12);
		return true;
	}
	if (String::Equals(indx, "28"))
	{
		card = std::make_pair(card_suit::spades, 12);
		return true;
	}
	// K
	if (String::Equals(indx, "29"))
	{
		card = std::make_pair(card_suit::hearts, 13);
		return true;
	}
	if (String::Equals(indx, "30"))
	{
		card = std::make_pair(card_suit::clubs, 13);
		return true;
	}
	if (String::Equals(indx, "31"))
	{
		card = std::make_pair(card_suit::diamonds, 13);
		return true;
	}
	if (String::Equals(indx, "32"))
	{
		card = std::make_pair(card_suit::spades, 13);
		return true;
	}
	// A
	if (String::Equals(indx, "33"))
	{
		card = std::make_pair(card_suit::hearts, 14);
		return true;
	}
	if (String::Equals(indx, "34"))
	{
		card = std::make_pair(card_suit::clubs, 14);
		return true;
	}
	if (String::Equals(indx, "35"))
	{
		card = std::make_pair(card_suit::diamonds, 14);
		return true;
	}
	if (String::Equals(indx, "36"))
	{
		card = std::make_pair(card_suit::spades, 14);
		return true;
	}

	// if not found
	return false;
}
//-----------------------------------------------------------------------------------------
int card_methods::get_random_int(const int& left_bound, const int& right_bound)
{
	if (left_bound == right_bound)
		return left_bound;

	std::mt19937 mersenne(static_cast<unsigned int>(time(0)));

	return mersenne() % ((right_bound + 1) - left_bound) + left_bound;
}
//-----------------------------------------------------------------------------------------
void card_methods::sort_cards(std::vector<std::pair<card_suit, int>>& cards, const card_suit& trump)
{
	std::sort(cards.begin(), cards.end(), [&](const auto& a, const auto& b) 
	{
		// if card A is a trump card
		if ((a.first == trump) && (b.first != trump))
		{
			return false;
		}
		// if card B is a trump card
		if ((a.first != trump) && (b.first == trump))
		{
			return true;
		}

		return a.second < b.second;
	});
}
//-----------------------------------------------------------------------------------------
bool card_methods::find_card_to_attack(
	const std::vector<std::pair<card_suit, int>>& cards_on_field,
	const std::vector<std::pair<card_suit, int>>& cards_where_to_find,
	const card_suit& trump,
	std::pair<card_methods::card_suit, int>& card)
{
	// kind of cards
	std::set<int> different_cards;
	for (const auto& card : cards_on_field)
	{
		different_cards.insert(card.second);
	}

	// if not found not_trump card
	std::vector<std::pair<card_suit, int>>::const_iterator it =
		std::find_if(cards_where_to_find.begin(), cards_where_to_find.end(), [&](const auto& a)
			{
				if (a.first == trump)
					return false;

				if (different_cards.count(a.second))
					return true;
			});
		

	// founded card to attack
	if (it != cards_where_to_find.end())
	{
		card = *it;
		return true;
	}
	else
	{


	}

	return false;
}
//-----------------------------------------------------------------------------------------