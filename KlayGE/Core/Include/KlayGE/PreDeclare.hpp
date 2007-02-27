#ifndef _PREDECLARE_HPP
#define _PREDECLARE_HPP

#include <boost/smart_ptr.hpp>

namespace KlayGE
{
	class Context;
	typedef boost::shared_ptr<std::istream> ResIdentifierPtr;
	class ResLoader;
	template <typename Key, typename Type, class Traits, class Allocator>
	class MapVector;
	template <typename Key, class Traits, class Allocator>
	class SetVector;
	class Exception;
	template <typename Sender, typename EventArg>
	class Event;

	class half;
	template <typename T, int N>
	class Vector_T;
	typedef Vector_T<float, 1> float1;
	typedef Vector_T<float, 2> float2;
	typedef Vector_T<float, 3> float3;
	typedef Vector_T<float, 4> float4;
	template <typename T>
	class Size_T;
	typedef Size_T<float> Size;
	template <typename T>
	class Rect_T;
	typedef Rect_T<float> Rect;
	template <typename T>
	class Matrix4_T;
	typedef Matrix4_T<float> float4x4;
	template <typename T>
	class Quaternion_T;
	typedef Quaternion_T<float> Quaternion;
	template <typename T>
	class Plane_T;
	typedef Plane_T<float> Plane;
	template <typename T>
	class Color_T;
	typedef Color_T<float> Color;
	template <typename T>
	class Bound_T;
	typedef Bound_T<float> Bound;
	template <typename T>
	class Sphere_T;
	typedef Sphere_T<float> Sphere;
	template <typename T>
	class Box_T;
	typedef Box_T<float> Box;

	class SceneManager;
	typedef boost::shared_ptr<SceneManager> SceneManagerPtr;
	class SceneNode;
	typedef boost::shared_ptr<SceneNode> SceneNodePtr;
	class SceneObject;
	typedef boost::shared_ptr<SceneObject> SceneObjectPtr;

	class Camera;
	typedef boost::shared_ptr<Camera> CameraPtr;
	class FirstPersonCameraController;
	class Font;
	typedef boost::shared_ptr<Font> FontPtr;
	class RenderEngine;
	typedef boost::shared_ptr<RenderEngine> RenderEnginePtr;
	class RenderTarget;
	typedef boost::shared_ptr<RenderTarget> RenderTargetPtr;
	struct RenderSettings;
	class RenderWindow;
	typedef boost::shared_ptr<RenderWindow> RenderWindowPtr;
	class Renderable;
	typedef boost::shared_ptr<Renderable> RenderablePtr;
	class RenderEffect;
	typedef boost::shared_ptr<RenderEffect> RenderEffectPtr;
	class RenderTechnique;
	typedef boost::shared_ptr<RenderTechnique> RenderTechniquePtr;
	class RenderPass;
	typedef boost::shared_ptr<RenderPass> RenderPassPtr;
	class RenderEffectParameter;
	typedef boost::shared_ptr<RenderEffectParameter> RenderEffectParameterPtr;
	class RenderEffectState;
	typedef boost::shared_ptr<RenderEffectState> RenderEffectStatePtr;
	struct RenderStateObject;
	typedef boost::shared_ptr<RenderStateObject> RenderStateObjectPtr;
	class ShaderObject;
	typedef boost::shared_ptr<ShaderObject> ShaderObjectPtr;
	class Texture;
	typedef boost::shared_ptr<Texture> TexturePtr;
	struct Sampler;
	typedef boost::shared_ptr<Sampler> SamplerPtr;
	class FrameBuffer;
	typedef boost::shared_ptr<FrameBuffer> FrameBufferPtr;
	class RenderView;
	typedef boost::shared_ptr<RenderView> RenderViewPtr;
	class GraphicsBuffer;
	typedef boost::shared_ptr<GraphicsBuffer> GraphicsBufferPtr;
	class RenderLayout;
	typedef boost::shared_ptr<RenderLayout> RenderLayoutPtr;
	class RenderGraphicsBuffer;
	typedef boost::shared_ptr<RenderGraphicsBuffer> RenderGraphicsBufferPtr;
	struct Viewport;
	class RenderFactory;
	typedef boost::shared_ptr<RenderFactory> RenderFactoryPtr;
	class RenderModel;
	typedef boost::shared_ptr<RenderModel> RenderModelPtr;
	class StaticMesh;
	typedef boost::shared_ptr<StaticMesh> StaticMeshPtr;
	class SkinnedModel;
	typedef boost::shared_ptr<SkinnedModel> SkinnedModelPtr;
	class SkinnedMesh;
	typedef boost::shared_ptr<SkinnedMesh> SkinnedMeshPtr;
	class KMesh;
	typedef boost::shared_ptr<KMesh> KMeshPtr;
	struct RenderDeviceCaps;
	class Query;
	typedef boost::shared_ptr<Query> QueryPtr;
	class OcclusionQuery;
	typedef boost::shared_ptr<OcclusionQuery> OcclusionQueryPtr;
	class PostProcess;
	typedef boost::shared_ptr<PostProcess> PostProcessPtr;
	class Downsampler2x2PostProcess;
	typedef boost::shared_ptr<Downsampler2x2PostProcess> Downsampler2x2PostProcessPtr;
	class BrightPassDownsampler2x2PostProcess;
	typedef boost::shared_ptr<BrightPassDownsampler2x2PostProcess> BrightPassDownsampler2x2PostProcessPtr;
	class SeparableBlurPostProcess;
	typedef boost::shared_ptr<SeparableBlurPostProcess> SeparableBlurPostProcessPtr;
	class BlurXPostProcess;
	typedef boost::shared_ptr<BlurXPostProcess> BlurXPostProcessPtr;
	class BlurYPostProcess;
	typedef boost::shared_ptr<BlurYPostProcess> BlurYPostProcessPtr;
	class SumLumPostProcess;
	typedef boost::shared_ptr<SumLumPostProcess> SumLumPostProcessPtr;
	class SumLumLogPostProcess;
	typedef boost::shared_ptr<SumLumLogPostProcess> SumLumLogPostProcessPtr;
	class SumLumIterativePostProcess;
	typedef boost::shared_ptr<SumLumIterativePostProcess> SumLumIterativePostProcessPtr;
	class SumLumExpPostProcess;
	typedef boost::shared_ptr<SumLumExpPostProcess> SumLumExpPostProcessPtr;
	class AdaptedLumPostProcess;
	typedef boost::shared_ptr<AdaptedLumPostProcess> AdaptedLumPostProcessPtr;
	class ToneMappingPostProcess;
	typedef boost::shared_ptr<ToneMappingPostProcess> ToneMappingPostProcessPtr;
	class HDRPostProcess;
	typedef boost::shared_ptr<HDRPostProcess> HDRPostProcessPtr;
	template <typename ParticleType>
	class ParticleSystem;

	class Socket;
	class Lobby;
	class Player;

	class AudioEngine;
	typedef boost::shared_ptr<AudioEngine> AudioEnginePtr;
	class AudioBuffer;
	typedef boost::shared_ptr<AudioBuffer> AudioBufferPtr;
	class SoundBuffer;
	class MusicBuffer;
	class AudioDataSource;
	typedef boost::shared_ptr<AudioDataSource> AudioDataSourcePtr;
	class AudioFactory;
	typedef boost::shared_ptr<AudioFactory> AudioFactoryPtr;

	class App3DFramework;

	class InputEngine;
	typedef boost::shared_ptr<InputEngine> InputEnginePtr;
	class InputDevice;
	typedef boost::shared_ptr<InputDevice> InputDevicePtr;
	class InputKeyboard;
	class InputMouse;
	class InputJoystick;
	class InputFactory;
	typedef boost::shared_ptr<InputFactory> InputFactoryPtr;

	class ShowEngine;
	typedef boost::shared_ptr<ShowEngine> ShowEnginePtr;
	class ShowFactory;
	typedef boost::shared_ptr<ShowFactory> ShowFactoryPtr;

	class ScriptModule;
	class RegisterModule;
	class ScriptEngine;
}

#endif			// _PREDECLARE_HPP
