#include <iostream>
#include <vector>
#include <regex>
using namespace std;

// Go-Back-N Protocol
void goBackN(int totalFrames, int windowSize)
{
    int i = 0;
    while (i < totalFrames)
    {
        cout << "Go-Back-N Protocol: Sending frames: ";
        for (int j = i; j < i + windowSize && j < totalFrames; j++)
        {
            cout << j << " ";
        }
        cout << "\nAcknowledgment received up to frame " << i + windowSize - 1 << "\n";
        i += windowSize; // Simulate all frames in window are acknowledged
    }
    cout << endl;
}

// Selective Repeat Protocol
void selectiveRepeat(int totalFrames, int windowSize)
{
    vector<bool> ack(totalFrames, false);
    int i = 0;
    while (i < totalFrames)
    {
        cout << "Selective Repeat Protocol: Sending frames: ";
        for (int j = i; j < i + windowSize && j < totalFrames; j++)
        {
            if (!ack[j])
                cout << j << " ";
        }
        cout << "\n";

        // Simulate acknowledgment for each frame in window
        for (int j = i; j < i + windowSize && j < totalFrames; j++)
        {
            if (!ack[j])
            {
                cout << "Acknowledgment received for frame " << j << "\n";
                ack[j] = true;
            }
        }

        // Move window
        while (i < totalFrames && ack[i])
            i++;
    }
    cout << endl;
}

// Leaky Bucket Algorithm
void leakyBucket(int bucketSize, int outgoingRate, int *packets, int n)
{
    int remaining = 0;
    for (int i = 0; i < n; i++)
    {
        remaining += packets[i];
        if (remaining > bucketSize)
        {
            cout << "Leaky Bucket Algorithm: Bucket overflow for packet " << i + 1 << "\n";
            remaining = bucketSize; // Max capacity is bucketSize
        }

        // Send packets at outgoing rate
        cout << "Sent " << min(outgoingRate, remaining) << " packets.\n";
        remaining -= min(outgoingRate, remaining);
    }
    cout << "Remaining packets in bucket: " << remaining << "\n\n";
}

// URL Splitting
void splitURL(const string &url)
{
    string protocol, hostname, port = "80", path = "/"; // Defaults
    size_t pos = 0;

    // Find protocol
    size_t protocolPos = url.find("://");
    if (protocolPos != string::npos)
    {
        protocol = url.substr(0, protocolPos);
        pos = protocolPos + 3; // Move past "://"
    }

    // Find hostname and port (if present)
    size_t hostEndPos = url.find('/', pos);
    if (hostEndPos == string::npos)
    {
        hostEndPos = url.length(); // No path, only hostname and optional port
    }

    size_t portPos = url.find(':', pos);
    if (portPos != string::npos && portPos < hostEndPos)
    {
        hostname = url.substr(pos, portPos - pos);                // Extract hostname
        port = url.substr(portPos + 1, hostEndPos - portPos - 1); // Extract port
    }
    else
    {
        hostname = url.substr(pos, hostEndPos - pos); // No port, only hostname
    }

    // Find path
    if (hostEndPos < url.length())
    {
        path = url.substr(hostEndPos); // Extract path
    }

    // Output parsed URL components
    cout << "URL Splitting:\n";
    cout << "Protocol: " << protocol << "\n";
    cout << "Hostname: " << hostname << "\n";
    cout << "Port: " << port << "\n";
    cout << "Path: " << path << "\n";
}

int main()
{
    // Go-Back-N Protocol
    int totalFrames = 10;
    int windowSize = 4;
    goBackN(totalFrames, windowSize);

    // Selective Repeat Protocol
    selectiveRepeat(totalFrames, windowSize);

    // Leaky Bucket Algorithm
    int bucketSize = 10;
    int outgoingRate = 4;
    int packets[] = {5, 1, 3, 8, 2}; // Incoming packets in each time unit
    int n = sizeof(packets) / sizeof(packets[0]);
    leakyBucket(bucketSize, outgoingRate, packets, n);

    // URL Splitting
    string url = "https://www.example.com:8080/path/to/page";
    splitURL(url);

    return 0;
}
