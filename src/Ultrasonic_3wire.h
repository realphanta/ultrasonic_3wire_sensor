#include "esphome.h"
#include "Ultrasonic.h"

Ultrasonic ultrasonic0(0);

class Ultrasonic_3wire_pin0 : public PollingComponent, public Sensor {
 public:


  Ultrasonic_3wire_pin0() : PollingComponent(1000) { }

  void setup() override {
    
  }

  void update() override {
    int distance = ultrasonic0.MeasureInCentimeters();
    if (distance > 3 && distance < 10) {
          publish_state(distance);
    }
  }
};
