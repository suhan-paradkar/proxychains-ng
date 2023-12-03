#define VERSION_NUMBER 4.16
#define VERSION_STRINGIFY_HELPER(x) #x
#define VERSION_STRINGIFY(x) VERSION_STRINGIFY_HELPER(x)
static const char version[] = VERSION_STRINGIFY(VERSION_NUMBER);
const char *proxychains_get_version(void) {
	return version;
}