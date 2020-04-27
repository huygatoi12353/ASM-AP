#ifndef KEYBOARDBUILD_H
#define KEYBOARDBUILD_H

#include <Keyboard.h>


class KeyboardBuild
{
    public:
        KeyboardBuild();
        virtual ~KeyboardBuild();
        virtual void build() = 0;
        KBBuild(keyboard* KB);
    protected:
        keyboard* _KB;
    private:
};

#endif // KEYBOARDBUILD_H
