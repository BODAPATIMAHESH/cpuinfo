struct cpuinfo_mock_file filesystem[] = {
	{
		.path = "/proc/cpuinfo",
		.size = 466,
		.content =
			"Processor\t: ARMv7 Processor rev 3 (v7l)\n"
			"processor\t: 0\n"
			"BogoMIPS\t: 38.40\n"
			"\n"
			"processor\t: 1\n"
			"BogoMIPS\t: 38.40\n"
			"\n"
			"processor\t: 2\n"
			"BogoMIPS\t: 38.40\n"
			"\n"
			"processor\t: 3\n"
			"BogoMIPS\t: 38.40\n"
			"\n"
			"Features\t: swp half thumb fastmult vfp edsp neon vfpv3 tls vfpv4 idiva idivt \n"
			"CPU implementer\t: 0x41\n"
			"CPU architecture: 7\n"
			"CPU variant\t: 0x0\n"
			"CPU part\t: 0xc07\n"
			"CPU revision\t: 3\n"
			"\n"
			"Hardware\t: Qualcomm MSM8226\n"
			"Revision\t: 8400\n"
			"Serial\t\t: 6468ae060f000000\n"
			"Device\t\t: titan\n"
			"Radio\t\t: 5\n"
			"MSM Hardware\t: MSM8226 CS\n",
	},
	{
		.path = "/system/build.prop",
		.size = 7310,
		.content =
			"\n"
			"# begin build properties\n"
			"# autogenerated by buildinfo.sh\n"
			"ro.build.id=LXB22.46-28.1\n"
			"ro.build.display.id=LXB22.46-28.1\n"
			"ro.build.version.incremental=1\n"
			"ro.build.version.sdk=21\n"
			"ro.build.version.codename=REL\n"
			"ro.build.version.all_codenames=REL\n"
			"ro.build.version.release=5.0.2\n"
			"ro.build.date=Fri Jan 23 13:06:19 CST 2015\n"
			"ro.build.date.utc=1422039980\n"
			"ro.build.type=user\n"
			"ro.build.user=hudsoncm\n"
			"ro.build.host=ilclbld32\n"
			"ro.build.tags=release-keys\n"
			"ro.product.model=XT1068\n"
			"ro.product.brand=motorola\n"
			"ro.product.name=titan_retgb\n"
			"ro.product.device=titan_umtsds\n"
			"ro.product.board=MSM8226\n"
			"# ro.product.cpu.abi and ro.product.cpu.abi2 are obsolete,\n"
			"# use ro.product.cpu.abilist instead.\n"
			"ro.product.cpu.abi=armeabi-v7a\n"
			"ro.product.cpu.abi2=armeabi\n"
			"ro.product.cpu.abilist=armeabi-v7a,armeabi\n"
			"ro.product.cpu.abilist32=armeabi-v7a,armeabi\n"
			"ro.product.cpu.abilist64=\n"
			"ro.product.manufacturer=motorola\n"
			"ro.wifi.channels=\n"
			"ro.board.platform=msm8226\n"
			"# ro.build.product is obsolete; use ro.product.device\n"
			"ro.build.product=titan_umtsds\n"
			"# Do not try to parse description, fingerprint, or thumbprint\n"
			"ro.build.description=titan_retgb-user 5.0.2 LXB22.46-28.1 1 release-keys\n"
			"ro.build.fingerprint=motorola/titan_retgb/titan_umtsds:5.0.2/LXB22.46-28.1/1:user/release-keys\n"
			"ro.build.characteristics=default\n"
			"# end build properties\n"
			"#\n"
			"# from device/moto/titan_umtsds/system.prop\n"
			"#\n"
			"#\n"
			"# system.prop for msm8226\n"
			"#\n"
			"\n"
			"# Use reference RIL for initial bringup\n"
			"#rild.libpath=/system/lib/libreference-ril.so\n"
			"rild.libpath=/vendor/lib/libril-qc-qmi-1.so\n"
			"rild.libargs=-d /dev/smd0\n"
			"persist.radio.nitz_plmn=\n"
			"persist.radio.nitz_lons_0=\n"
			"persist.radio.nitz_lons_1=\n"
			"persist.radio.nitz_lons_2=\n"
			"persist.radio.nitz_lons_3=\n"
			"persist.radio.nitz_sons_0=\n"
			"persist.radio.nitz_sons_1=\n"
			"persist.radio.nitz_sons_2=\n"
			"persist.radio.nitz_sons_3=\n"
			"ril.subscription.types=NV,RUIM\n"
			"DEVICE_PROVISIONED=1\n"
			"persist.radio.msgtunnel.start=false\n"
			"\n"
			"#\n"
			"# system props for the cne module\n"
			"#\n"
			"persist.cne.feature=0\n"
			"\n"
			"\n"
			"# Skip /sys/power/wait_for_fb_* nodes and\n"
			"# force FB to be always on\n"
			"debug.sf.fb_always_on=1\n"
			"\n"
			"debug.sf.hw=1\n"
			"debug.egl.hw=1\n"
			"debug.composition.type=c2d\n"
			"persist.hwc.mdpcomp.enable=true\n"
			"debug.mdpcomp.logs=0\n"
			"dalvik.vm.heapsize=36m\n"
			"dev.pm.dyn_samplingrate=1\n"
			"\n"
			"persist.demo.hdmirotationlock=false\n"
			"ro.hdmi.enable=true\n"
			"tunnel.decode=false\n"
			"tunnel.audiovideo.decode=false\n"
			"lpa.decode=true\n"
			"lpa.use-stagefright=true\n"
			"\n"
			"#system props for the MM modules\n"
			"\n"
			"media.stagefright.enable-player=true\n"
			"media.stagefright.enable-http=true\n"
			"media.stagefright.enable-aac=true\n"
			"media.stagefright.enable-qcp=true\n"
			"media.stagefright.enable-fma2dp=true\n"
			"media.stagefright.enable-scan=true\n"
			"mmp.enable.3g2=true\n"
			"#9273 is decimal sum of supported codecs in AAL\n"
			"#codecs:(PARSER_)AVI AC3 ASF AAC QCP DTS 3G2 MP2TS\n"
			"mm.enable.qcom_parser=37491\n"
			"\n"
			"# VIDC: debug_levels\n"
			"# 1:ERROR 2:HIGH 4:LOW 0:NOlogs 7:AllLogs\n"
			"vidc.debug.level=1\n"
			"\n"
			"#\n"
			"# system props for the data modules\n"
			"#\n"
			"ro.use_data_netmgrd=true\n"
			"\n"
			"#system props for time-services\n"
			"persist.timed.enable=true\n"
			"\n"
			"#\n"
			"# system prop for opengles version\n"
			"#\n"
			"# 196608 is decimal for 0x30000 to report version 3\n"
			"ro.opengles.version=196608\n"
			"\n"
			"#\n"
			"# System props for telephony\n"
			"# System prop to turn on CdmaLTEPhone always\n"
			"telephony.lteOnCdmaDevice=0\n"
			"\n"
			"# simulate sdcard on /data/media\n"
			"#\n"
			"persist.fuse_sdcard=false\n"
			"persist.esdfs_sdcard=true\n"
			"ro.crypto.fuse_sdcard=true\n"
			"\n"
			"#\n"
			"#snapdragon value add features\n"
			"#\n"
			"# System props for audio\n"
			"ro.qc.sdk.audio.ssr=false\n"
			"##fluencetype can be \"fluence\" or \"fluencepro\" or \"none\"\n"
			"persist.audio.fluence.mode=endfire\n"
			"persist.audio.handset.mic=digital\n"
			"ro.config.vc_call_vol_steps=7\n"
			"# FM maximum volume be between 0 and 8192 (0dB)\n"
			"ro.audio.fm_max_volume=4096\n"
			"\n"
			"#need rotation info in audio-land\n"
			"ro.audio.monitorRotation=1\n"
			"\n"
			"# Enable/disable cabl\n"
			"ro.qualcomm.cabl=0\n"
			"\n"
			"# system prop for NFC DT\n"
			"ro.nfc.port=I2C\n"
			"\n"
			"#\n"
			"# system property for Bluetooth hci transport\n"
			"#\n"
			"ro.qualcomm.bt.hci_transport=smd\n"
			"\n"
			"#\n"
			"# system property for Bluetooth HFP version\n"
			"#\n"
			"ro.bluetooth.hfp.ver=1.6\n"
			"\n"
			"#\n"
			"# system property for Bluetooth SAP support\n"
			"# Motorola disabled SAP\n"
			"#\n"
			"ro.qualcomm.bluetooth.sap=false\n"
			"\n"
			"# Bluetooth LE power class\n"
			"qcom.bt.le_dev_pwr_class=1\n"
			"\n"
			"##property to choose between virtual/external wfd display\n"
			"persist.sys.wfd.virtual=0\n"
			"# Motorola, ams087, 09/24/2013, IKJBMR2-6432 : disable tunnel audio encode\n"
			"#tunnel.audio.encode = true\n"
			"\n"
			"# Enable SSR\n"
			"persist.sys.ssr.restart_level=3\n"
			"persist.sys.qc.sub.rdump.on=1\n"
			"\n"
			"# For TCMD debug level\n"
			"persist.tcmd.log.limit=0\n"
			"\n"
			"# Disable QCOM net early sockets feature\n"
			"net.early.sockets=0\n"
			"\n"
			"# Radio RIL properties\n"
			"persist.radio.no_wait_for_card=1\n"
			"persist.radio.apm_sim_not_pwdn=1\n"
			"persist.radio.dfr_mode_set=1\n"
			"persist.radio.relay_oprt_change=1\n"
			"\n"
			"#Enable offload audio playback by default\n"
			"audio.offload.disable=0\n"
			"\n"
			"#Disable offload audio video playback by default\n"
			"av.offload.enable=false\n"
			"\n"
			"#\n"
			"# ADDITIONAL_BUILD_PROPERTIES\n"
			"#\n"
			"ro.build.version.full=Blur_Version.22.26.1.titan_retgb.retgball.en.GB\n"
			"ro.mot.build.customerid=retgball\n"
			"ro.mot.build.version.sdk_int=22\n"
			"ro.product.display=Moto G\n"
			"ro.build.version.qcom=AU_LINUX_ANDROID_LNX.LA.3.5.1_RB1.04.04.02.048.045\n"
			"persist.radio.plmn_name_cmp=1\n"
			"persist.radio.process_sups_ind=0\n"
			"ro.gsm.data_retry_config=default_randomization=2000,max_retries=infinite,1000,1000,80000,125000,485000,905000\n"
			"ro.product.locale.language=en\n"
			"ro.product.locale.region=GB\n"
			"ro.telephony.default_network=3\n"
			"ro.com.android.dataroaming=false\n"
			"persist.radio.multisim.config=dsds\n"
			"persist.radio.dont_use_dsd=true\n"
			"ro.config.ringtone=Moto.ogg\n"
			"ro.config.notification_sound=Moto.ogg\n"
			"ro.config.alarm_alert=Oxygen.ogg\n"
			"ro.MAX_HIDDEN_APPS=12\n"
			"dalvik.vm.heapstartsize=8m\n"
			"dalvik.vm.heapgrowthlimit=96m\n"
			"dalvik.vm.heapsize=256m\n"
			"dalvik.vm.heaptargetutilization=0.75\n"
			"dalvik.vm.heapminfree=2m\n"
			"dalvik.vm.heapmaxfree=8m\n"
			"persist.sys.logkit.ctrlcode=0\n"
			"ro.vendor.extension_library=/vendor/lib/libqc-opt.so\n"
			"persist.radio.apm_sim_not_pwdn=1\n"
			"ro.usb.mtp=0x2e82\n"
			"ro.usb.mtp_adb=0x2e76\n"
			"ro.usb.ptp=0x2e83\n"
			"ro.usb.ptp_adb=0x2e84\n"
			"ro.usb.bpt=0x2e28\n"
			"ro.usb.bpt_adb=0x2e29\n"
			"ro.usb.bpteth=0x2e2a\n"
			"ro.usb.bpteth_adb=0x2e2b\n"
			"persist.audio.calfile0=/etc/Bluetooth_cal.acdb\n"
			"persist.audio.calfile1=/etc/General_cal.acdb\n"
			"persist.audio.calfile2=/etc/Global_cal.acdb\n"
			"persist.audio.calfile3=/etc/Handset_cal.acdb\n"
			"persist.audio.calfile4=/etc/Hdmi_cal.acdb\n"
			"persist.audio.calfile5=/etc/Headset_cal.acdb\n"
			"persist.audio.calfile6=/etc/Speaker_cal.acdb\n"
			"ro.bug2go.magickeys=24,26\n"
			"persist.sys.qc.sub.rdump.max=0\n"
			"ro.adb.secure=1\n"
			"ro.sf.lcd_density=320\n"
			"keyguard.no_require_sim=true\n"
			"ro.zygote.capsuid=0\n"
			"mdc_initial_max_retry=10\n"
			"persist.radio.apn_delay=5000\n"
			"persist.sys.media.use-awesome=false\n"
			"drm.service.enabled=true\n"
			"ro.com.google.clientidbase=android-motorola\n"
			"ro.com.google.clientidbase.ms=android-motorola\n"
			"ro.com.google.clientidbase.am=android-motorola\n"
			"ro.com.google.clientidbase.gmm=android-motorola\n"
			"ro.com.google.clientidbase.yt=android-motorola\n"
			"ro.url.legal=http://www.google.com/intl/%s/mobile/android/basic/phone-legal.html\n"
			"ro.url.legal.android_privacy=http://www.google.com/intl/%s/mobile/android/basic/privacy.html\n"
			"ro.setupwizard.mode=OPTIONAL\n"
			"ro.com.google.gmsversion=5.0_r1\n"
			"ro.carrier=unknown\n"
			"telephony.lteOnCdmaDevice=0\n"
			"ro.media.enc.aud.fileformat=amr\n"
			"ro.media.enc.aud.codec=amrnb\n"
			"persist.sys.dalvik.vm.lib.2=libart.so\n"
			"dalvik.vm.isa.arm.features=div\n"
			"net.bt.name=Android\n"
			"dalvik.vm.stack-trace-file=/data/anr/traces.txt\n"
			"ro.qc.sdk.izat.premium_enabled=0\n"
			"ro.qc.sdk.izat.service_mask=0x0\n"
			"persist.gps.qc_nlp_in_use=0\n"
			"ro.gps.agps_provider=1\n"
			"\n",
	},
	{
		.path = "/sys/devices/system/cpu/kernel_max",
		.size = 2,
		.content = "3\n",
	},
	{
		.path = "/sys/devices/system/cpu/possible",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/present",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "1190400\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "300000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_siblings_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/thread_siblings_list",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "1190400\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "300000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/core_siblings_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/core_id",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/thread_siblings_list",
		.size = 2,
		.content = "1\n",
	},
	{ NULL },
};
