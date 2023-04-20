//Timer
    HAL_TIM_Base_Start(&htim1); //start Timer
    HAL_TIM_Encoder_Start(&htim1,TIM_CHANNEL_1|TIM_CHANNEL_2);
    __Hal_TIM_GET_COUNTER(&htim2);//GET_COUNTER(us)


//DMA
    HAL_ADC_Start_DMA(&htim1,(uint32_t*)value,numberVal);

//DSP
    //Matrix
        float xx[16];
        arm_matrix_instance_f32 xx2;
        arm_mat_init_f32(&xx2,4,4,(float32_t*)&xx);
    //PID
        arm_pid_instance_f32 PID = {0};