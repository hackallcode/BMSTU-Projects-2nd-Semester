#ifndef __GAME_OBJECT_INCLUDED__
#define __GAME_OBJECT_INCLUDED__

#include <string>
#include "cocos2d.h"

class Game;

namespace AttackAndDefend {

    const float MARGIN_SIZE = 20.f;
    const float GROUND_HEIGHT = 192.f;    

    class GameObject abstract
    {
    public:
        GameObject();
        GameObject(float x, float y, cocos2d::Sprite* sprite = nullptr);
        GameObject(float x, float y, std::string const& fileName);

        virtual ~GameObject() = default;

        virtual void Update(Game* const scene);

        cocos2d::Sprite* GetSprite();
        float GetX();
        float GetY();
        float GetW();
        float GetH();
        bool IsRightAlignment();

        void SetSprite(cocos2d::Sprite* pointer);
        void SetX(float x);
        void SetY(float y);
        void SetLeftAlignment();
        void SetRightAlignment(float frameWidth);

    protected:
        cocos2d::Sprite* sprite_;
        float x_, prevX_;
        float y_, prevY_;
        float w_, prevW_;
        float h_, prevH_;
        float frameWidth_, prevFrameWidth_;
        bool isRightAlignment_, prevIsRightAlignment_;

        virtual void onPositionUpdate_();
        void SetSpriteX_(float x);
        void SetSpriteY_(float y);
        void SetW_(float w);
        void SetH_(float h);
    };

}

#endif // __GAME_OBJECT_INCLUDED__