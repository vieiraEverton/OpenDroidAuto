#include <service/AudioInputService.h>
#include "it_smg_libs_aasdk_service_AudioInputService.h"
#include "it_smg_libs_aasdk_messenger_Messenger.h"
#include "it_smg_libs_aasdk_Runtime.h"
#include "it_smg_libs_aasdk_projection_AudioInput.h"

jfieldID JAudioInputService::handleId = nullptr;

JAudioInputService::JAudioInputService(JNIEnv *env, jobject jaudioinputservice, jobject jmessenger, jobject jaudioinput)
        : JNIBase(env, jaudioinputservice, "JAudioInputService")  {

    JMessenger::Pointer jMessenger = JMessenger::getJMessenger(env, jmessenger);
    projection::JAudioInput::Pointer jAudioInput = projection::JAudioInput::getJAudioInput(env, jaudioinput);

    audioInputService_ = new AudioInputService(JRuntime::ioService(), jMessenger->getMessenger(), jAudioInput);
}

JAudioInputService::~JAudioInputService() {
    delete audioInputService_;
}

JAudioInputService::Pointer JAudioInputService::getJAudioInputService(JNIEnv *env, jobject jaudioinputservice) {
    return (JAudioInputService::Pointer)env->GetLongField(jaudioinputservice, JAudioInputService::handleId);;
}

IService::Pointer JAudioInputService::getService() {
    return audioInputService_;
}

void JAudioInputService::start() {
    audioInputService_->start();
}

void JAudioInputService::stop() {
    audioInputService_->stop();
}

////////////////////////////////////////////////////////////////////////////////////////////////////

extern "C"
JNIEXPORT void JNICALL
Java_it_smg_libs_aasdk_service_AudioInputService_nativeInit(JNIEnv *env, jclass clazz) {
    jclass _class = env->FindClass("it/smg/libs/aasdk/service/AudioInputService");
    JAudioInputService::handleId = env->GetFieldID(_class, "handle_", "J");

    env->DeleteLocalRef(_class);
    _class = nullptr;
}

extern "C"
JNIEXPORT jlong JNICALL
Java_it_smg_libs_aasdk_service_AudioInputService_nativeSetup(JNIEnv *env, jobject thiz, jobject jmessenger, jobject jaudioinput) {
    JAudioInputService::Pointer jAudioInputService = new JAudioInputService(env, thiz, jmessenger, jaudioinput);
    return (jlong)((size_t)jAudioInputService);
}

extern "C"
JNIEXPORT void JNICALL
Java_it_smg_libs_aasdk_service_AudioInputService_nativeStart(JNIEnv *env, jobject thiz) {
    JAudioInputService::Pointer jAudioInputService = JAudioInputService::getJAudioInputService(env, thiz);
    jAudioInputService->start();
}

extern "C"
JNIEXPORT void JNICALL
Java_it_smg_libs_aasdk_service_AudioInputService_nativeStop(JNIEnv *env, jobject thiz) {
    JAudioInputService::Pointer jAudioInputService = JAudioInputService::getJAudioInputService(env, thiz);
    jAudioInputService->stop();
}

extern "C"
JNIEXPORT void JNICALL
Java_it_smg_libs_aasdk_service_AudioInputService_nativeDelete(JNIEnv *env, jobject thiz) {
    JAudioInputService::Pointer jAudioInputService = JAudioInputService::getJAudioInputService(env, thiz);
    delete jAudioInputService;
}