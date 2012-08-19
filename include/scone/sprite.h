
// Copyright 2012 The Scone authors.
// See LICENSE for more info.


#ifndef __SPRITE_H__
#define __SPRITE_H__

#include "scone/common.h"

class Sprite : public sf::Drawable {

private:
  DISALLOW_COPY_AND_ASSIGN(Sprite);

public:
  Sprite();

  // Implement the sf::Drawable interface
  virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

  // Functions made to been overwritten
  virtual void update(float diff);
  virtual void event(const sf::Event& event);

  sf::Vector2f position();

protected:
  sf::Sprite sprite;


};

#endif

