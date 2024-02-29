//
// Created by Kolitha Warnakulasooriya on 2023-11-30.
//

typedef struct neuron_t
{
    float actv;
    float *out_weights;
    float bias;
    float z;

    float dactv;
    float *dw;
    float dbias;
    float dz;

} neuron;

typedef struct layer_t
{
    int num_neu;
    struct neuron_t *neu;
} layer;