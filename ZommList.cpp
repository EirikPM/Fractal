#include "ZommList.h"



ZommList::ZommList(int witdh, int height) : m_width(witdh), m_height(height)
{
}

void ZommList::add(const Zoom & zoom)
{
	zooms.push_back(zoom);

	m_xCenter += (zoom.x - m_width / 2)*m_scale;
	m_yCenter += -(zoom.y - m_height / 2)*m_scale;

	m_scale *= zoom.scale;
}

std::pair<double, double> ZommList::doZoom(int x, int y)
{
	double xFractal = (x - m_width / 2)*m_scale + m_xCenter;
	double yFractal = (y - m_height / 2)*m_scale + m_yCenter;


	return std::pair<double, double>(xFractal, yFractal);
}


ZommList::~ZommList()
{
}
