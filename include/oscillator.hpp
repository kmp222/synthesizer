#pragma once

#include "utils.hpp"

// an oscillator is made of a basic wave and a LFO for adding textures

struct Osc {

    Waves wave = SINE;
    double lfo_hertz = 0.0;
    double lfo_amplitude = 0.0;

    Osc(Waves w, double lfo_h, double lfo_a);

    // returns wave amplitude value w.r.t. time and frequency of note
    double sound(double time, double frequency);

};
