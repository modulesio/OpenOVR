#pragma once

class Config {
public:
	Config();
	~Config();

	bool EnableAudio() const { return enableAudio; }
	bool RenderCustomHands() const { return renderCustomHands; }
	vr::HmdColor_t HandColour() const { return handColour; }

private:
	static int ini_handler(
		void* user, const char* section,
		const char* name, const char* value,
		int lineno);

	bool enableAudio = true;
	bool renderCustomHands = true;
	vr::HmdColor_t handColour = vr::HmdColor_t{ 0.3f, 0.3f, 0.3f, 1 };

};

extern Config oovr_global_configuration;
