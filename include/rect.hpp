/*
 * Rect.hpp
 *
 *  Created on: 24-05-2013
 *      Author: krris
 */

#ifndef RECT_HPP_
#define RECT_HPP_

#include <boost/serialization/nvp.hpp>

struct Rect{
	Rect() {}
	Rect(int w, int h) : width(w), height(h) {}
	int width = 0;
	int height = 0;
	int x = 0;
	int y = 0;

	/* If rectangle found a place in a bin. */
	bool isPlaced = false;

    template<class Archive>
    void serialize(Archive &ar, const unsigned int file_verision)
    {
        ar & boost::serialization::make_nvp("width", width);
        ar & boost::serialization::make_nvp("height", height);
        ar & boost::serialization::make_nvp("x", x);
        ar & boost::serialization::make_nvp("y", y);

    }
};

struct RectSize{
	int widht = 0;
	int height = 0;
};


#endif /* RECT_HPP_ */
