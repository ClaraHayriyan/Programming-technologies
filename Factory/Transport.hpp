#ifndef FACTORY_TRANSPORT_HPP
#define FACTORY_TRANSPORT_HPP

class Transport {
public:
    virtual ~Transport() {};
    virtual void deliver() =0;
};

#endif  // FACTORY_TRANSPORT_HPP
