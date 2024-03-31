#ifndef MODELLISTENER_HPP
#define MODELLISTENER_HPP

#include <gui/model/Model.hpp>

class ModelListener
{
public:
    ModelListener() : model(0) {}
    
    virtual ~ModelListener() {}

    void bind(Model* m)
    {
        model = m;
    }

    virtual void getTimeInfo(rtc_info_t* p_time) {}
protected:
    Model* model;
};

#endif // MODELLISTENER_HPP
