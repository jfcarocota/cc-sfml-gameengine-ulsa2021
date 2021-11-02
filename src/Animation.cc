#include "Animation.hh"

Animation:: Animation(const char* animationUrl, Drawable*& drawable)
{
  reader = new std::ifstream();

  reader->open(animationUrl);
  *reader >> delay;
  *reader >> row;
  *reader >> startFrame;
  *reader >> endFrame;
  *reader >> width;
  *reader >> height;
  reader->close();

  currentFrame = startFrame;
  this->drawable = drawable;
}

Animation::~Animation()
{
}

void Animation::Play(float& deltaTime)
{
  timer += deltaTime;
  if(timer >= delay)
  {
    drawable->RebindRect(currentFrame * width, row * height, width, height);
    //cambiar de frame
    timer = 0.f;
    if(currentFrame < endFrame)
    {
      currentFrame++;
    }
    else
    {
      currentFrame = startFrame;
    }
  }
}