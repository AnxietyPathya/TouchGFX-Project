#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

extern "C"
{
    #include "rtc.h"
}

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();
protected:
    ModelListener* modelListener;
    rtc_info_t info;
};

#endif // MODEL_HPP
